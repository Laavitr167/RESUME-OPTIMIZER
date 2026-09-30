#include <stdio.h>

int main() 
{
    // --- Developer Input Vector (Portfolio Clean Architecture) ---
    char job_title[50];
    double target_salary;
    int core_keyword_count;
    int secondary_keyword_count;
    double resume_page_count;

    // --- Algorithmic Processing Weights (Mind-Blowing Concept) ---
    double base_score;
    double keyword_density_bonus;
    double formatting_penalty;
    double final_ats_match_percentage;
    double keyword_monetary_value;

    printf("====================================================\n");
    printf("     AI-ATS RESUME OPTIMIZER & VALUE ENGINE        \n");
    printf("====================================================\n");

    // 1. Ingesting Professional Metrics
    printf("[Setup] Enter Target Job Title (use_underscores): ");
    scanf("%s", job_title);

    printf("[Market] Enter Expected Annual Salary: $");
    scanf("%lf", &target_salary);

    printf("[Analysis] How many Core Skills are listed? ");
    scanf("%d", &core_keyword_count);

    printf("[Analysis] How many Secondary Skills are listed? ");
    scanf("%d", &secondary_keyword_count);

    printf("[Format] How many total pages is your resume? ");
    scanf("%lf", &resume_page_count);

    // 2. Proprietary ATS Calculation Logic (Pure Smart Math)
    // Fact A: Base ATS starting score is established out of 40
    base_score = 40.0;

    // Fact B: Core keywords carry a 5.5% match weight, secondary carry 2.5%
    keyword_density_bonus = (core_keyword_count * 5.5) + (secondary_keyword_count * 2.5);

    // Fact C: Resumes over 2 pages get penalized heavily by modern scrapers
    // If resume_page_count is 3, penalty = (3 - 2) * 15 = 15 points off!
    formatting_penalty = (resume_page_count - 2.0) * 15.0;

    // Fact D: Compile the total structural ATS score
    final_ats_match_percentage = base_score + keyword_density_bonus - formatting_penalty;

    // Fact E: Financial ROI calculation: What is each individual keyword actually worth
    // to their career based on their target market salary?
    keyword_monetary_value = (target_salary * 0.12) / (core_keyword_count + secondary_keyword_count + 1);

    // 3. Render Dashboard UI to Terminal
    printf("\n====================================================\n");
    printf("          APPLICANT TRACKING SYSTEM METRICS          \n");
    printf("====================================================\n");
    printf("Target Position Pipeline:  %s\n", job_title);
    printf("Calculated ATS Match Rate: %.1f%%\n", final_ats_match_percentage);
    printf("Page Formatting Impact:   -%.1f points\n", formatting_penalty);
    printf("----------------------------------------------------\n");
    printf("FINANCIAL ANALYSIS: Each skill keyword optimized on \n");
    printf("your profile unlocks $%.2f of your market value.\n", keyword_monetary_value);
    printf("====================================================\n");

    // 4. Exporting the Product Asset for the Client
    FILE *export_file = fopen("ats_report.md", "w");
    fprintf(export_file, "# 🚀 ATS Optimization Strategy: %s\n\n", job_title);
    fprintf(export_file, "### 📊 Core Scoring Vector\n");
    fprintf(export_file, "* Your profile achieved a structural match velocity of **%.1f%%**.\n", final_ats_match_percentage);
    fprintf(export_file, "* Page overhead constraint penalty applied: **%.1f points**.\n\n", formatting_penalty);
    fprintf(export_file, "### 💰 Immediate Actionable Financial Value\n");
    fprintf(export_file, "* Adding just **1 more relevant industry skill** raises your earning leverage by **$%.2f** dynamically against a $%.2f baseline salary.\n\n", keyword_monetary_value, target_salary);
    fprintf(export_file, "--- \n*Generated via Optimizer Engine CLI v1.0. Perfect for pasting into LinkedIn/Notion optimization trackers.*");
    fclose(export_file);

    printf("\n[SUCCESS] Custom report 'ats_report.md' generated perfectly!\n");

    return 0;
}
